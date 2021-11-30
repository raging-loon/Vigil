#include "../../packets/igmpv4.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../protocols.h"
#include <netinet/ip.h>
#include "../../utils.h"
void ip4_igmp_decode(const unsigned char * pkt, const char * src_ip, const char * dest_ip){
  struct main_igmp * type_decode = (struct main_igmp *)(pkt + ETH_HDR_SZ + sizeof(struct iphdr));
  printf("IPv4 IGMP %s -> %s [", src_ip ,dest_ip);
  switch(main_igmp->type){
    case 0x11:{
      printf(" Membership Query ]\n");
      break;
    }
    case 0x22:{
      struct igmp_member_report * igmp_mem_rep = (struct igmp_member_report *)(pkt + ETH_HDR_SZ + sizeof(struct iphdr));

      char multicast_ip[32];
      strcpy(multicast_ip,ipv4_ntoa(igmp_mem_rep->multicast_address));
      printf(" Membership Report / Join group %s for any sources ]\n",multicast_ip);
      break;
    } 
    default:
      printf("Unknown IGMP Type=%d ]\n",main_igmp->type);
      break;
  } 
}

