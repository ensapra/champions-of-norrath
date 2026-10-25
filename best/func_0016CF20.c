typedef struct {
    u8 *ptr;
    s16 start;
    s16 end;
    s16 flag;
    s16 pad;
} Entry;

extern Entry D_006E5D80[];
u16 D_0048695C;
s32 D_00486960;
s32 D_0048696C;
s32 D_00486970;

void func_0016CF20(u8 *arg0) {
    s32 size = *(u16 *)(arg0 + 4);
    s32 head = D_0048696C;
    s32 tail = D_00486970;
    s32 start;
    s32 newhead;
    s32 prev;

    size = size ? size : 1;

    if (head != tail) {
        prev = (head - 1) & 0xF;
        if (D_00486960 - D_006E5D80[prev].end >= size) {
            start = D_006E5D80[prev].end;
            goto alloc;
        }
    }
    start = 0;
    prev = (head - 1) & 0xF;
    for (;;) {
        if (D_006E5D80[prev].start >= D_006E5D80[tail].start)
            break;
        if (D_006E5D80[tail].flag != 0)
            return;
        *(s16 *)(D_006E5D80[tail].ptr + 0x18) = 0;
        tail = (tail + 1) & 0xF;
        D_00486970 = tail;
    }

alloc:
    head = D_0048696C;
    if (tail == head)
        goto done_scan;
    if (D_006E5D80[tail].start < start)
        goto done_scan;
    for (;;) {
        if (D_006E5D80[tail].start >= start + size) {
            tail = D_00486970;
            goto done_scan;
        }
        if (D_006E5D80[tail].flag != 0)
            return;
        *(s16 *)(D_006E5D80[tail].ptr + 0x18) = 0;
        tail = (tail + 1) & 0xF;
        D_00486970 = tail;
        if (tail == head) {
            head = D_0048696C;
            goto newhead;
        }
        if (D_006E5D80[tail].start < start)
            goto done_scan;
    }

done_scan:
    head = D_0048696C;
newhead:
    newhead = (head + 1) & 0xF;
    if (newhead == tail) {
        if (D_006E5D80[newhead].flag != 0)
            return;
        *(s16 *)(D_006E5D80[newhead].ptr + 0x18) = 0;
        tail = (newhead + 1) & 0xF;
        D_00486970 = tail;
    }
    D_006E5D80[head].end = start + size;
    D_006E5D80[head].start = start;
    D_006E5D80[head].flag = 0;
    D_006E5D80[head].ptr = arg0;
    *(u16 *)(arg0 + 0x1A) = head;
    *(s16 *)(arg0 + 0x18) = D_0048695C + start;
    D_0048696C = newhead;
}
