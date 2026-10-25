s32 func_003044FC(s32,s32); s32 func_00304CFC(s32); s32 func_00304F60(s32,s32,s32);
typedef struct {s32 key,x,y;} Entry;
void *func_00164A10(u16 *a,s32 key){s32 count=a[0],lo=0,hi=count-1,top=hi,mid,r,len;Entry *base=(Entry*)((char*)a+4),*p;
 while(1){r=1;mid=(lo+hi)>>1;if(mid>=0){r=-1;if(mid<=top)r=func_003044FC(key,base[mid].key);}if(lo<hi){if(r<=0)hi=mid-1;else lo=mid+1;}else break;}
 p=base+lo;len=func_00304CFC(key);if(func_00304F60(key,p->key,len)==0)return p;
 if(lo+1<count){p++;len=func_00304CFC(key);if(func_00304F60(key,p->key,len)==0)return p;}return 0;
}
