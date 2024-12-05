#include <stdio.h>

typedef struct _node node_t;
struct _node {
    char name[20];
    int price ;
    int offset ; //이거 바꿔서 시험 나옴
};

node_t fruit[5] = {
    {"apple",1000,0},
    {"banana",2000,2},
    {"kiwi",1500,2},
    {"melon",1800,-1},
    {"blueberry",1200,-4}
};

int head = 1;

int main(){
    FILE *fp = fopen("fruit.bin","wb");
    fwrite(&head,sizeof(int),1,fp);
    fwrite(fruit, sizeof(node_t),5,fp);
    fclose(fp);

    fp = fopen("fruit.bin","rb");
    int head;
    fread(&head,sizeof(int),1,fp);
    fseek(fp,sizeof(int)+sizeof(node_t)*head,SEEK_SET); // 기말 나옵니당~~~ sizeof(int)를 안더하려면, SEEK_CUR 
//  fseek(fp,sizeof(node_t)*head,SEEK_CUR);
    node_t trail;
    fread(&trail,sizeof(node_t),1,fp);
    printf("%s %d\n",trail.name,trail.price);

    while(trail.offset != 0){
        fseek(fp,sizeof(node_t)*(trail.offset-1),SEEK_CUR);
        fread(&trail,sizeof(node_t),1,fp);
        printf("%s %d\n",trail.name,trail.price);
    }
    fclose(fp);

}