typedef struct __attribute__((packed,aligned(4))){u64 a,b;s32 c;}E;typedef struct{E*data;s32 cap,unused,count;}B;void func_0013A3F8(B*);
void ovl_ntgui2_func_0013AAA8(B*a,B*b){s32 n=b->count;while(a->cap<a->count+n)func_0013A3F8(a);if(n>0){s32 i;for(i=0;i<n;i++)a->data[a->count+i]=b->data[i];}a->count+=n;}
