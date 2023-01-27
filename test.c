#include "stdint.h"
#include "unistd.h"

int main(){
    //uint64_t f=0x0a2e65726966206e;
    //uint64_t e=0x6f20736920656d6f;
    //uint64_t d=0x68207327656e6f65;
    //uint64_t c=0x6d6f532021656e6f; 
    //uint64_t b=0x7972657665202c73;
    //uint64_t a=0x7765206172652066;
    //we are family!!! 根据ascii表，从低位开始读入，也就是77=w, 65=e, 空格=20
    //...

    uint64_t b = 0x212121796c696d61;
    uint64_t a = 0x6620657261206577;
    write(1,&a,0x24);
}
