/***************************************************************************//**
 *   @file   iiod_private.h
 *   @brief  Private header file of iiod
 *   @author Mihail Chindris (mihail.chindris@analog.com)
********************************************************************************
 * Copyright 2022(c) Analog Devices, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of Analog Devices, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES, INC. “AS IS” AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 * EVENT SHALL ANALOG DEVICES, INC. BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*******************************************************************************/

#ifndef IIOD_PRIVATE_H
#define IIOD_PRIVATE_H

#include "iio.h"

#define IIOD_WR				0x1
#define IIOD_ENDL			0x2
#define IIOD_RD				0x4
#define IIOD_PARSER_MAX_BUF_SIZE	128

#define IIOD_STR(cmd) {(cmd), sizeof(cmd) - 1}

#define IIOD_CTX(desc, conn) {.instance = (desc)->app_instance,\
			      .conn = (conn)->conn,\
				  .binary = (conn)->protocol}

struct iiod_desc;

/* Used to store a string and its size */
struct iiod_str {
	char *str;
	uint32_t len;
};

/*
 * Commads are the ones documented int the link:
 * https://wiki.analog.com/resources/tools-software/linux-software/libiio_internals#the_network_backend_and_iio_daemon
 */
enum iiod_cmd {
	IIOD_CMD_HELP,
	IIOD_CMD_EXIT,
	IIOD_CMD_PRINT,
	IIOD_CMD_BINARY,
	IIOD_CMD_VERSION,
	IIOD_CMD_TIMEOUT,
	IIOD_CMD_OPEN,
	IIOD_CMD_CLOSE,
	IIOD_CMD_READ,
	IIOD_CMD_WRITE,
	IIOD_CMD_READBUF,
	IIOD_CMD_WRITEBUF,
	IIOD_CMD_GETTRIG,
	IIOD_CMD_SETTRIG,
	IIOD_CMD_SET
};

enum iiod_opcode {
	IIOD_OP_RESPONSE,           /* 0 */
	IIOD_OP_PRINT,              /* 1 */
	IIOD_OP_TIMEOUT,            /* 2 */
	IIOD_OP_READ_ATTR,          /* 3 */
	IIOD_OP_READ_DBG_ATTR,      /* 4 */
	IIOD_OP_READ_BUF_ATTR,      /* 5 */
	IIOD_OP_READ_CHN_ATTR,      /* 6 */
	/* 7-8: new read event attr ops added in stable libiio v1.0 */
	IIOD_OP_READ_DEV_EVT_ATTR,  /* 7 */
	IIOD_OP_READ_CHN_EVT_ATTR,  /* 8 */
	IIOD_OP_WRITE_ATTR,         /* 9  (was 7) */
	IIOD_OP_WRITE_DBG_ATTR,     /* 10 (was 8) */
	IIOD_OP_WRITE_BUF_ATTR,     /* 11 (was 9) */
	IIOD_OP_WRITE_CHN_ATTR,     /* 12 (was 10) */
	/* 13-14: new write event attr ops added in stable libiio v1.0 */
	IIOD_OP_WRITE_DEV_EVT_ATTR, /* 13 */
	IIOD_OP_WRITE_CHN_EVT_ATTR, /* 14 */
	IIOD_OP_GETTRIG,            /* 15 (was 11) */
	IIOD_OP_SETTRIG,            /* 16 (was 12) */

	IIOD_OP_OPEN_BUFFER,        /* 17 (was CREATE_BUFFER=13) */
	IIOD_OP_CLOSE_BUFFER,       /* 18 (was FREE_BUFFER=14) */
	IIOD_OP_ENABLE_BUFFER,      /* 19 (was 15) */
	IIOD_OP_DISABLE_BUFFER,     /* 20 (was 16) */

	IIOD_OP_CREATE_BLOCK,       /* 21 (was 17) */
	IIOD_OP_FREE_BLOCK,         /* 22 (was 18) */
	IIOD_OP_TRANSFER_BLOCK,     /* 23 (was 19) */
	IIOD_OP_ENQUEUE_BLOCK_CYCLIC, /* 24 (was 20) */
	IIOD_OP_RETRY_DEQUEUE_BLOCK,  /* 25 (was 21) */

	IIOD_OP_CREATE_EVSTREAM,    /* 26 (was 22) */
	IIOD_OP_FREE_EVSTREAM,      /* 27 (was 23) */
	IIOD_OP_READ_EVENT,         /* 28 (was 24) */

	IIOD_NB_OPCODES,
};

enum iiod_protocol {
	IIOD_ASCII_COMMAND,
	IIOD_BINARY_COMMAND,
};

struct command_data_ascii {
	/* IIOD Command */
	enum iiod_cmd cmd;
	/* Device Name */
	char device[MAX_DEV_ID];
	/* Channel Name */
	char channel[MAX_CHN_ID];
	/* Attribute Name */
	char attr[MAX_ATTR_NAME];
	/* Trigger Name */
	char trigger[MAX_TRIG_ID];
};

struct command_data_binary {
	/* Client ID */
	uint16_t client_id;
	/* OP Code */
	enum iiod_opcode op_code;
	/* Device ID */
	uint16_t device;
	/* Channel ID */
	uint16_t channel;
	/* Attribute ID */
	uint16_t attr;
	/* Trigger ID */
	uint16_t trigger;
	/* Buffer ID */
	uint16_t buffer;
	uint16_t block_id;
	uint32_t bytes_size;
	uint8_t curr;
};

/*
 * Structure to be filled after a command is parsed.
 * Depending of cmd some fields are set or not
 */
struct comand_desc {
	uint32_t mask;
	uint32_t timeout;
	uint32_t sample_count;
	uint32_t bytes_count;
	uint32_t count;
	bool cyclic;
	void *command_data;
	enum iio_attr_type type;
};

/* Used to store buffer indexes for non blocking transfers */
struct iiod_buff {
	char *buf;
	uint32_t idx;
	uint32_t len;
};

/*
 * Protocol binding for one libiio v1 block, private to the iiod layer.
 *
 * This is the no-OS equivalent of libiio's iiod daemon "struct block_entry"
 * (iiod/ops.h): it holds only what the wire protocol needs to answer a block.
 * The block storage itself belongs to the iio layer (struct iio_block), which
 * never learns what a protocol client id is.
 */
struct iiod_block_entry {
	/* Block index as assigned by the client, from cmd->code >> 16 */
	uint16_t idx;
	/* Client ID the response header must be stamped with */
	uint16_t cl_id;
	/* Cleared by FREE_BLOCK; a dead entry is never served */
	bool live;
};

/*
 * Blocks created by a client for one device buffer. Equivalent of libiio's
 * "struct buffer_entry": it binds a connection and a device to a block list.
 */
struct iio_stream {
	struct iiod_block_entry blocks[MAX_NUM_BLOCKS];
	/* Number of blocks created so far */
	uint32_t nb_blocks;
	/*
	 * Device this buffer was opened on. Needed because the block drain runs
	 * outside the command that enqueued the credit, so the command's own
	 * device field cannot be used there.
	 */
	uint16_t dev;
	/* Set once ENABLE_BUFFER has opened the device buffer */
	bool started;
	/* Channel mask from OPEN_BUFFER, needed at ENABLE_BUFFER */
	uint32_t mask;
};

struct iiod_command {
	uint16_t client_id;
	uint8_t op;
	uint8_t dev;
	int32_t code;
};

/* Result after executing a command. */
struct iiod_run_cmd_result {
	uint32_t val;
	/* If set. Val needs to be sent */
	bool write_val;
	/* If buf.len != 0 buf has to be sent */
	struct iiod_buff buf;
};

struct iiod_event_desc {
	/* Number of clients */
	uint16_t num_clients;
	/* List of clients */
	struct no_os_list_desc *clients;
};

struct iiod_event_client {
	uint16_t client_id;
	uint16_t dev_id;
	uint16_t event_read_count;
	struct lf256fifo *event_data;
};

/* Internal structure to handle a connection state */
struct iiod_conn_priv {
	/* User instance of the connection to be sent in iiod_ctx */
	void *conn;
	/* Unset when can be used from the connection pool */
	bool used;
	/* State Machine */
	int32_t (*run_state)(struct iiod_desc *,
			      struct iiod_conn_priv *);

	/* Command data after parsed */
	struct comand_desc cmd_data;

	/* Result of an executed cmd */
	struct iiod_run_cmd_result res;
	/* IIOD States */
	enum {
		/* Write Event Data if available */
		IIOD_WRITING_EVENT_DATA,
		/* Write buffer if available */
		IIOD_WRITING_BUF_DATA,
		/* Reading line until \n */
		IIOD_READING_LINE,
		/* Execute cmd without I/O operations */
		IIOD_RUNNING_CMD,
		/* Write result of executed cmd */
		IIOD_WRITING_CMD_RESULT,
		IIOD_WRITING_BIN_RESPONSE,
		/* I/O operations for READBUF and WRITEBUF cmds */
		IIOD_RW_BUF,
		/* I/O operations for WRITE cmd */
		IIOD_READING_WRITE_DATA,
		/* Set when a operation is finalized */
		IIOD_LINE_DONE,
		/* Pushing  cyclic buffer until IIO device is closed  */
		IIOD_PUSH_CYCLIC_BUFFER,
	} state;

	/* Buffer to store received line */
	char parser_buf[IIOD_PARSER_MAX_BUF_SIZE] __attribute__((aligned(4)));
	/* Index in parser_buf. For nonblocking operation */
	uint32_t parser_idx;
	/* Buffer to store raw data (attributes or buffer data).*/
	char *payload_buf;
	/* Length of payload_buf_len */
	uint32_t payload_buf_len;
	/* Used in nonbloking transfers to save indexes */
	struct iiod_buff nb_buf;

	/* Mask of current opened buffer */
	uint32_t mask;
	/* Buffer to store mask as a string */
	char buf_mask[10];
	/* Context for strtok_r function */
	char *strtok_ctx;
	/* True if the device was open with cyclic buffer flag */
	bool is_cyclic_buffer;
	/* IIOD Command Format */
	enum iiod_protocol protocol;
	struct iiod_command res_header;
	/* Event Descriptor */
	struct iiod_event_desc events;
	/* Buffer to store the event data for transfer */
	uint8_t event_data[MAX_NUM_EVENTS];

	struct lf256fifo *fifo_stream;
	struct iio_stream stream;
};

/* Private iiod information */
struct iiod_desc {
	/* Pool of iiod connections */
	struct iiod_conn_priv conns[IIOD_MAX_CONNECTIONS];
	/* Application operations */
	struct iiod_ops ops;
	/* Application instance */
	void *app_instance;
	/* Address of xml */
	char *xml;
	/* XML length in bytes */
	uint32_t xml_len;
	/* Backend used by IIOD */
	enum physical_link_type phy_type;
};

#endif //IIOD_PRIVATE_H
