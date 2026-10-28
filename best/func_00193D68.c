typedef struct E{s32 a,b;}E;typedef struct Buf{E*data;s32 cap,unk8,count;}Buf;void func_00193768(Buf*);
void func_00193D68(Buf*d,Buf*s,s32 pos){s32 n=s->count; s32 end; goto grow_test; grow: func_00193768(d); grow_test: if(d->count+n>d->cap)goto grow; end=d->count+n; for(s32 i=end-1;i>=pos+n;i--)d->data[i+1]=d->data[i];for(s32 i=0;i<n;i++)d->data[pos+i]=s->data[i];d->count+=n;}
