#include <stdio.h>
int main(){
	const unsigned char pkt = "\x33\x33\x00\x00\x00\xfb\x00\x50\x56\xaa\xb0\x05\x86\xdd\x60\x06" \
"\xaf\xf1\x00\x7e\x11\xff\xfe\x80\x00\x00\x00\x00\x00\x00\xc0\xd5" \
"\x78\x05\x6a\xbd\x69\x34\xff\x02\x00\x00\x00\x00\x00\x00\x00\x00" \
"\x00\x00\x00\x00\x00\xfb\x14\xe9\x14\xe9\x00\x7e\x4d\xc0\x00\x00" \
"\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x04\x5f\x66\x74\x70\x04" \
"\x5f\x74\x63\x70\x05\x6c\x6f\x63\x61\x6c\x00\x00\x0c\x00\x01\x04" \
"\x5f\x6e\x66\x73\xc0\x11\x00\x0c\x00\x01\x0b\x5f\x61\x66\x70\x6f" \
"\x76\x65\x72\x74\x63\x70\xc0\x11\x00\x0c\x00\x01\x04\x5f\x73\x6d" \
"\x62\xc0\x11\x00\x0c\x00\x01\x09\x5f\x73\x66\x74\x70\x2d\x73\x73" \
"\x68\xc0\x11\x00\x0c\x00\x01\x08\x5f\x77\x65\x62\x64\x61\x76\x73" \
"\xc0\x11\x00\x0c\x00\x01\x07\x5f\x77\x65\x62\x64\x61\x76\xc0\x11" \
"\x00\x0c\x00";
printf("%d\n",sizeof(pkt));
}