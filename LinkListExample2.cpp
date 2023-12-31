
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Book{
	char title[30];
	char author[30];
	float price;
	int pages;	
};
struct NODE{ //LinkedList
    Book data;
    struct NODE *next;
};
typedef struct NODE *LinkedList; //khai báo dslk gom nhieu node
//ham tao node
LinkedList CreateNode(Book value){
    LinkedList temp; // declare a node
    temp = (LinkedList)malloc(sizeof(struct NODE)); // cap phat vung nho
    temp->next = NULL;// Cho next tro toi null
    temp->data = value; // Gán giá tri cho Node
    return temp;//tra ve node moi da co gia tri
}
//ham them cuoi
LinkedList AddTail(LinkedList head, Book value){
    LinkedList temp,p;// Khai báo 2 node t?m temp và p
    temp = CreateNode(value);//
    if(head == NULL){
        head = temp;     //
    }
    else{
        p  = head;// p tro toi head
        while(p->next != NULL){
            p = p->next;// duyet p den cuoi danh sach
        }
        p->next = temp;//p tro toi temp (them node vao cuoi danh sach)
    }
    return head;
}
// them dau
LinkedList AddHead(LinkedList head, Book value){
    LinkedList temp = CreateNode(value); // Kh?i t?o node temp v?i data = value
    if(head == NULL){
        head = temp; // //N?u linked list dang tr?ng thì Node temp là head luôn
    }else{
        temp->next = head; // Tr? next c?a temp = head hi?n t?i
        head = temp; // Ð?i head hi?n t?i = temp(Vì temp bây gi? là head m?i mà)
    }
    return head;
}
// them vi tri bat ky
LinkedList AddAt(LinkedList head, Book value, int position){
    if(position == 0 || head == NULL){
        head = AddHead(head, value); // N?u v? trí chèn là 0, t?c là thêm vào d?u
    }else{
        // B?t d?u tìm v? trí c?n chèn. Ta s? dùng k d? d?m cho v? trí
        int k = 1;
        LinkedList p = head;
        while(p != NULL && k != position){
            p = p->next;
            ++k;
        }
 
        if(k != position){
            // N?u duy?t h?t danh sách lk r?i mà v?n chua d?n v? trí c?n chèn, ta s? m?c d?nh chèn cu?i
            // N?u b?n không mu?n chèn, hãy thông báo v? trí chèn không h?p l?
            //head = AddTail(head, value);
             printf("Vi tri chen vuot qua vi tri cuoi cung!\n");
        }else{
            LinkedList temp = CreateNode(value);
            temp->next = p->next;
            p->next = temp;
        }
    }
    return head;
}
// xoa dau
LinkedList DelHead(LinkedList head){
	LinkedList temp;
	temp=head;
    if(head == NULL){
        printf("\nCha co gi de xoa het!");
    }else{
        head = head->next;
    }
    free(temp);
    return head;
}
 // xoa cuoi
LinkedList DelTail(LinkedList head){
    if (head == NULL || head->next == NULL){
         return DelHead(head); // dslk co 1 node
    }
    //dslk co nhieu node
    LinkedList q, p = head;
    while(p->next->next != NULL){
        p = p->next;
    }
	q=p->next;
    p->next = NULL; // Cho next b?ng NULL
    free(q);
    return head;
}
// xoa vi tri bat ky
LinkedList DelAt(LinkedList head, int position){
    if(position == 0 || head == NULL || head->next == NULL){
        head = DelHead(head); // N?u v? trí chèn là 0, t?c là thêm vào d?u
    }else{
        // B?t d?u tìm v? trí c?n chèn. Ta s? dùng k d? d?m cho v? trí
        int k = 1;
        LinkedList q, p = head;
        while(p->next->next != NULL && k != position){
            p = p->next;
            ++k;
        }
 
        if(k != position){
            // N?u duy?t h?t danh sách lk r?i mà v?n chua d?n v? trí c?n chèn, ta s? m?c d?nh xóa cu?i
            // N?u b?n không mu?n xóa, hãy thông báo v? trí xóa không h?p l?
            head = DelTail(head);
            // printf("Vi tri xoa vuot qua vi tri cuoi cung!\n");
        }else{
        	q=p->next;
            p->next = q->next;
            free(q);
        }
    }
    return head;
}
//lay thong tin mot node
Book Get(LinkedList head, int index){
    int k = 0;
    LinkedList p = head;
    while(p != NULL && k != index){
        p = p->next;
    }
    return p->data;
}
//ham tim kiem theo title
int Search(LinkedList head, char title[30]){
    int position = 0;
    for(LinkedList p = head; p != NULL; p = p->next){
        if(strcmp(p->data.title,title)==0){
            return position;
        }
        ++position;
    }
    return -1;
}
// xoa sach theo title
LinkedList DelByVal(LinkedList head, char title[30]){
    int position = Search(head, title);
    while(position != -1){
        DelAt(head, position);
        position = Search(head, title);
    }
    return head;
}
//ham xuat danh sach lien let 
void Traverser(LinkedList head){
    printf("\n");
    for(LinkedList p = head; p != NULL; p = p->next){
        printf("\nTille: %s", p->data.title);
        printf("\tAuthor: %s", p->data.author);
        printf("\tPrice: %.1f", p->data.price);
        printf("\tPages: %5d", p->data.pages);
    }
}
 
// ham lay chieu dai danh sach lien ket
int Length(LinkedList head){
    int length = 0;
    for(LinkedList p = head; p != NULL; p = p->next){
        ++length;
    }
    return length;
}
//ham nhap 1 cuon sach
void inputBook(Book &b)
{
		fflush(stdin);
		printf("\nTitle: ");
		gets(b.title);
		fflush(stdin);
		printf("Author: ");
		gets(b.author);
		printf("Price: "); scanf("%f",&b.price);
		printf("Pages: "); scanf("%d",&b.pages);
       
}
//ham nhap danh sach lien ket
LinkedList Input(LinkedList head){
    Book value;
    int n;
    do{
        printf("\nNhap so luong phan tu n = ");
        scanf("%d", &n);
    }while(n <= 0);
 
    for(int i = 0; i < n; ++i){
        printf("\nNhap gia tri can them: ");
        inputBook(value); // nhap 1 cuon sach
        head = AddTail(head, value);
    }
    return head;
}
//ham chinh
int main(){
	LinkedList head = NULL;
    printf("\n==Tao 1 danh sach lien ket==");
    head = Input(head);
    Traverser(head);
 
    printf("\n==Thu them 1 phan tu vao linked list==");
    Book b1;
    inputBook(b1);
    head = AddAt(head, b1, 2);
    Traverser(head);
 
    printf("\n==Thu xoa 1 phan tu khoi linked list==");
    int pos;
    printf("\n nhap vi tri can xoa: ");
	scanf("%d",&pos);
	head = DelAt(head, pos);
    Traverser(head);
 	
 	printf("\n==Thu xoa dau linked list==");
    head = DelHead(head);
    Traverser(head);
    
    printf("\n==Thu xoa cuoi linked list==");
    head = DelTail(head);
    Traverser(head);
    
    printf("\n==Thu tim kiem 1 phan tu trong linked list==");
    char title[30];
    fflush(stdin);
	printf("\ninput Title: ");
	gets(title);
    int index = Search(head, title);
    printf("\nTim thay tai chi so %d", index);
 
    printf("\n Sap xep sinh vien tu nghien cuu %d", index);
 
}
