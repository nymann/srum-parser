/* Reproduced from the source of the open-source mingw-w64 project, from
 * the file at mingw-w64/mingw-w64-headers/include/ipifcons.h, as the file
 * is marked as being in the public domain by the following notice which is
 * contanied in the original file
 */

/* See also Include/10.0.14393.0/shared/ipifcons.h in the Microsoft Windows
 * 10 SDK (Not reproduced due to copyright) for annotations explaining some
 * IF_TYPEs
 */

/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef __IPIFCONS_H__
#define __IPIFCONS_H__

#ifdef __cplusplus
extern "C" {
#endif

typedef ULONG IFTYPE;

#define MIN_IF_TYPE 1

#define IF_TYPE_OTHER 1
#define IF_TYPE_REGULAR_1822 2
#define IF_TYPE_HDH_1822 3
#define IF_TYPE_DDN_X25 4
#define IF_TYPE_RFC877_X25 5
#define IF_TYPE_ETHERNET_CSMACD 6
#define IF_TYPE_IS088023_CSMACD 7
#define IF_TYPE_ISO88024_TOKENBUS 8
#define IF_TYPE_ISO88025_TOKENRING 9
#define IF_TYPE_ISO88026_MAN 10
#define IF_TYPE_STARLAN 11
#define IF_TYPE_PROTEON_10MBIT 12
#define IF_TYPE_PROTEON_80MBIT 13
#define IF_TYPE_HYPERCHANNEL 14
#define IF_TYPE_FDDI 15
#define IF_TYPE_LAP_B 16
#define IF_TYPE_SDLC 17
#define IF_TYPE_DS1 18
#define IF_TYPE_E1 19
#define IF_TYPE_BASIC_ISDN 20
#define IF_TYPE_PRIMARY_ISDN 21
#define IF_TYPE_PROP_POINT2POINT_SERIAL 22
#define IF_TYPE_PPP 23
#define IF_TYPE_SOFTWARE_LOOPBACK 24
#define IF_TYPE_EON 25
#define IF_TYPE_ETHERNET_3MBIT 26
#define IF_TYPE_NSIP 27
#define IF_TYPE_SLIP 28
#define IF_TYPE_ULTRA 29
#define IF_TYPE_DS3 30
#define IF_TYPE_SIP 31
#define IF_TYPE_FRAMERELAY 32
#define IF_TYPE_RS232 33
#define IF_TYPE_PARA 34
#define IF_TYPE_ARCNET 35
#define IF_TYPE_ARCNET_PLUS 36
#define IF_TYPE_ATM 37
#define IF_TYPE_MIO_X25 38
#define IF_TYPE_SONET 39
#define IF_TYPE_X25_PLE 40
#define IF_TYPE_ISO88022_LLC 41
#define IF_TYPE_LOCALTALK 42
#define IF_TYPE_SMDS_DXI 43
#define IF_TYPE_FRAMERELAY_SERVICE 44
#define IF_TYPE_V35 45
#define IF_TYPE_HSSI 46
#define IF_TYPE_HIPPI 47
#define IF_TYPE_MODEM 48
#define IF_TYPE_AAL5 49
#define IF_TYPE_SONET_PATH 50
#define IF_TYPE_SONET_VT 51
#define IF_TYPE_SMDS_ICIP 52
#define IF_TYPE_PROP_VIRTUAL 53
#define IF_TYPE_PROP_MULTIPLEXOR 54
#define IF_TYPE_IEEE80212 55
#define IF_TYPE_FIBRECHANNEL 56
#define IF_TYPE_HIPPIINTERFACE 57
#define IF_TYPE_FRAMERELAY_INTERCONNECT 58
#define IF_TYPE_AFLANE_8023 59
#define IF_TYPE_AFLANE_8025 60
#define IF_TYPE_CCTEMUL 61
#define IF_TYPE_FASTETHER 62
#define IF_TYPE_ISDN 63
#define IF_TYPE_V11 64
#define IF_TYPE_V36 65
#define IF_TYPE_G703_64K 66
#define IF_TYPE_G703_2MB 67
#define IF_TYPE_QLLC 68
#define IF_TYPE_FASTETHER_FX 69
#define IF_TYPE_CHANNEL 70
#define IF_TYPE_IEEE80211 71
#define IF_TYPE_IBM370PARCHAN 72
#define IF_TYPE_ESCON 73
#define IF_TYPE_DLSW 74
#define IF_TYPE_ISDN_S 75
#define IF_TYPE_ISDN_U 76
#define IF_TYPE_LAP_D 77
#define IF_TYPE_IPSWITCH 78
#define IF_TYPE_RSRB 79
#define IF_TYPE_ATM_LOGICAL 80
#define IF_TYPE_DS0 81
#define IF_TYPE_DS0_BUNDLE 82
#define IF_TYPE_BSC 83
#define IF_TYPE_ASYNC 84
#define IF_TYPE_CNR 85
#define IF_TYPE_ISO88025R_DTR 86
#define IF_TYPE_EPLRS 87
#define IF_TYPE_ARAP 88
#define IF_TYPE_PROP_CNLS 89
#define IF_TYPE_HOSTPAD 90
#define IF_TYPE_TERMPAD 91
#define IF_TYPE_FRAMERELAY_MPI 92
#define IF_TYPE_X213 93
#define IF_TYPE_ADSL 94
#define IF_TYPE_RADSL 95
#define IF_TYPE_SDSL 96
#define IF_TYPE_VDSL 97
#define IF_TYPE_ISO88025_CRFPRINT 98
#define IF_TYPE_MYRINET 99
#define IF_TYPE_VOICE_EM 100
#define IF_TYPE_VOICE_FXO 101
#define IF_TYPE_VOICE_FXS 102
#define IF_TYPE_VOICE_ENCAP 103
#define IF_TYPE_VOICE_OVERIP 104
#define IF_TYPE_ATM_DXI 105
#define IF_TYPE_ATM_FUNI 106
#define IF_TYPE_ATM_IMA 107
#define IF_TYPE_PPPMULTILINKBUNDLE 108
#define IF_TYPE_IPOVER_CDLC 109
#define IF_TYPE_IPOVER_CLAW 110
#define IF_TYPE_STACKTOSTACK 111
#define IF_TYPE_VIRTUALIPADDRESS 112
#define IF_TYPE_MPC 113
#define IF_TYPE_IPOVER_ATM 114
#define IF_TYPE_ISO88025_FIBER 115
#define IF_TYPE_TDLC 116
#define IF_TYPE_GIGABITETHERNET 117
#define IF_TYPE_HDLC 118
#define IF_TYPE_LAP_F 119
#define IF_TYPE_V37 120
#define IF_TYPE_X25_MLP 121
#define IF_TYPE_X25_HUNTGROUP 122
#define IF_TYPE_TRANSPHDLC 123
#define IF_TYPE_INTERLEAVE 124
#define IF_TYPE_FAST 125
#define IF_TYPE_IP 126
#define IF_TYPE_DOCSCABLE_MACLAYER 127
#define IF_TYPE_DOCSCABLE_DOWNSTREAM 128
#define IF_TYPE_DOCSCABLE_UPSTREAM 129
#define IF_TYPE_A12MPPSWITCH 130
#define IF_TYPE_TUNNEL 131
#define IF_TYPE_COFFEE 132
#define IF_TYPE_CES 133
#define IF_TYPE_ATM_SUBINTERFACE 134
#define IF_TYPE_L2_VLAN 135
#define IF_TYPE_L3_IPVLAN 136
#define IF_TYPE_L3_IPXVLAN 137
#define IF_TYPE_DIGITALPOWERLINE 138
#define IF_TYPE_MEDIAMAILOVERIP 139
#define IF_TYPE_DTM 140
#define IF_TYPE_DCN 141
#define IF_TYPE_IPFORWARD 142
#define IF_TYPE_MSDSL 143
#define IF_TYPE_IEEE1394 144
#define IF_TYPE_RECEIVE_ONLY 145

#define MAX_IF_TYPE 145