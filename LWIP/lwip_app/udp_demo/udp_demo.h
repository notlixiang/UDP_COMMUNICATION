#ifndef __UDP_DEMO_H
#define __UDP_DEMO_H
#include "lwip/pbuf.h"
#include "lwip/tcp.h"
#include "lwip/udp.h"
#include "lwip_comm.h"
#include "sys.h"

#include "udp_data_struct.h"
//////////////////////////////////////////////////////////////////////////////////
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
// ALIENTEK STM32F407开发板
// UDP 测试代码
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//创建日期:2014/8/15
//版本：V1.0
//版权所有，盗版必究。
// Copyright(C) 广州市星翼电子科技有限公司 2009-2019
// All rights reserved
//*******************************************************************************
//修改信息
//无
//////////////////////////////////////////////////////////////////////////////////

#define UDP_DEMO_RX_BUFSIZE 200  //定义udp最大接收数据长度
#define UDP_DEMO_PORT 8089       //定义udp连接的端口

#define UDP_CHECK_FRONT 1234
#define UDP_CHECK_BACK 6789



extern udp_data *udp_frame_send_ptr;
extern udp_data *udp_frame_recv_ptr;
extern char *udp_frame_send_ptr_char;
extern char *udp_frame_recv_ptr_char;

void udp_demo_test(void);
void udp_demo_recv(void *arg, struct udp_pcb *upcb, struct pbuf *p,
                   struct ip_addr *addr, u16_t port);
void udp_demo_senddata(struct udp_pcb *upcb);
void udp_demo_connection_close(struct udp_pcb *upcb);


void  udp_demo_set_remoteip(void);//先选择IP
void udp_send_joint_data(struct udp_pcb *upcb,char* buf);
#endif

