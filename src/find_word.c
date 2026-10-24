u32 *find_word(u32 *p, u32 *end, u32 val) {
    while (*p != val && p < end)
        p++;
    return p < end ? p : NULL;
}
