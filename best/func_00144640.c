typedef struct HeapNode { u8 pad0[2]; u16 used; u32 size; u32 next; u32 pad10[3]; u32 name; u32 str; u32 ra; } HeapNode;
void func_002D70D0(char *, ...);
extern char D_00461EE0[], D_00461F10[], D_00461F30[], D_00461F48[], D_00461F70[], D_00461F90[];
s32 D_00483B28; s32 D_00483B2C; s32 D_00483B30; HeapNode *D_004868B4;
void func_00144640(void) {
 HeapNode *node;
 func_002D70D0(D_00461EE0);
 func_002D70D0(D_00461F10,D_00483B30);
 node=D_004868B4;
 do {
 if(node->used==0) func_002D70D0(D_00461F30,(char*)node+0x1c,node->size);
 else func_002D70D0(D_00461F48,(char*)node+0x1c,node->str,node->ra,node->size);
 node=(HeapNode*)node->next;
 } while(node!=D_004868B4);
 func_002D70D0(D_00461F70,D_00483B2C,D_00483B2C-D_00483B28,D_00483B28);
 func_002D70D0(D_00461F90,D_00483B30++);
 func_002D70D0(D_00461EE0);
}
