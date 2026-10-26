extern void func_00143630(void *);
void func_00276590(void *obj) {
    char *o=(char*)obj; s32 n=*(s32*)(o+0x85c); void **items=(void**)(o+0x838); s32 i;
    for(i=0;i<n;i++) { char *p=(char*)items[i]; if(p) {
        *(f32*)(p+0x10)=*(f32*)(o+0x10)+*(f32*)(o+0x468)**(f32*)(p+0x50);
        *(f32*)(p+0x14)=*(f32*)(o+0x14)+*(f32*)(o+0x46c)**(f32*)(p+0x50);
        *(f32*)(p+0x18)=*(f32*)(o+0x18)+*(f32*)(o+0x470)**(f32*)(p+0x50);
        func_00143630(p);
    }}
}
