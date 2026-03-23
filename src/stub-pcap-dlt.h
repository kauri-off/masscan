#ifndef STUB_PCAP_DLT_H
#define STUB_PCAP_DLT_H

typedef enum {
	/* Packets are prefixed by an integer indicating
	 * the protocol type in host-byte-order (4-bytes)
	 * followed by the raw IPv4 or IPv6 header */
	PCAP_DLT_NULL = 0,

	/* Ethernet */
	PCAP_DLT_ETHERNET = 1,

	/* Packets are 'raw' on the network. The first byte
	 * will be the first byte of the IPv4/IPv6 header */
	PCAP_DLT_RAW = 12,

	/* Linux "cooked" capture encapsulation, used when libpcap falls back
	 * for interfaces without a supported link-layer type (e.g. rmnet) */
	PCAP_DLT_LINUX_SLL = 113,
} pcap_dlt_t;

#endif

