void drdp_validate_send__Fii(int, int);
void connection_send_internal__FP12connection_tPCUcii(void *, const unsigned char *, int, int);

void connection_send__FP12connection_tPCvii(void *conn, const void *data, int a, int b) {
    volatile void *dummy;
    drdp_validate_send__Fii(a, b);
    connection_send_internal__FP12connection_tPCUcii(conn, (const unsigned char *)data, a, b);
    dummy = (void *)0;
    (void)dummy;
}
