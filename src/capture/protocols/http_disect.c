#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../utils.h"
#include "../../filter/parsing/rule.h"
void http_disect(const unsigned char * pkt, const struct rule_data * rdata){
  // printf("%s\n",pkt);
  int loc = strloc(pkt,0x0d);
  char *request_hdr = (char *)malloc(255);
  strncpy(request_hdr,pkt,loc );
  printf("%s\n",request_hdr);
  
}