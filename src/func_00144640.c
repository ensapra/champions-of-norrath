typedef struct HeapNode {u8 p0[2];u16 used;u32 size;u32 name;struct HeapNode *next;u32 p10[2];u32 ra;u32 unk;} HeapNode;
s32 func_002D70D0(char*,...); extern char D_00461EE0[],D_00461F10[],D_00461F30[],D_00461F48[],D_00461F70[],D_00461F90[];
s32 D_00483B28,D_00483B2C,D_00483B30; HeapNode *D_004868B4;
s64 func_00144640(void){HeapNode *n;char *p;
func_002D70D0(D_00461EE0);func_002D70D0(D_00461F10,D_00483B30);n=D_004868B4;
do{p=(char*)n+0x1c;if(!n->used)func_002D70D0(D_00461F30,p,n->size);else func_002D70D0(D_00461F48,p,n->name,n->ra,n->size);n=n->next;}while(n!=D_004868B4);
func_002D70D0(D_00461F70,D_00483B2C,D_00483B2C-D_00483B28,D_00483B28);
func_002D70D0(D_00461F90,D_00483B30++);
return func_002D70D0(D_00461EE0);
}
