void ipaddress_read__FP11ipaddress_tPCv(void *, const void *);
void usocket_sendto_addr__FP9usocket_tPC11ipaddress_tPCviiii(void *, void *, const void *, int, int, int, int);

void usocket_sendto__FP9usocket_tPCviiii(void *s, const void *data, int a, int b, int c, int d) {
    char addr[0x10]; /* placeholder size */
    ipaddress_read__FP11ipaddress_tPCv(addr, data);
    usocket_sendto_addr__FP9usocket_tPC11ipaddress_tPCviiii(s, addr, (const char *)data + 6, a - 6, b, c, d);
}
