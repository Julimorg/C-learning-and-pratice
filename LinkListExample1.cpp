#include<stdio.h>
#include<stdlib.h>
 
struct NODE{ //LinkedList
    int data;
    struct NODE *next;
 };
 
typedef struct NODE *LinkedList; //khai b�o dslk gom nhieu node
// ham tao node
LinkedList CreateNode(int value){
    LinkedList temp; // declare a node
    temp = (LinkedList)malloc(sizeof(struct NODE)); // cap phat vung nho
    temp->next = NULL;// Cho next tro toi null
    temp->data = value; // G�n gi� tri cho Node
    return temp;//tra ve node moi da co gia tri
}
// ham them cuoi
LinkedList AddTail(LinkedList head, int value){
    LinkedList temp,p;// Khai b�o 2 node t?m temp v� p
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
LinkedList AddHead(LinkedList head, int value){
    LinkedList temp = CreateNode(value); // Kh?i t?o node temp v?i data = value
    if(head == NULL){
        head = temp; // //N?u linked list dang tr?ng th� Node temp l� head lu�n
    }else{
        temp->next = head; // Tr? next c?a temp = head hi?n t?i
        head = temp; // �?i head hi?n t?i = temp(V� temp b�y gi? l� head m?i m�)
    }
    return head;
}
// them vi tri bat ky
LinkedList AddAt(LinkedList head, int value, int position){
    if(position == 0 || head == NULL){
        head = AddHead(head, value); // N?u v? tr� ch�n l� 0, t?c l� th�m v�o d?u
    }else{
        // B?t d?u t�m v? tr� c?n ch�n. Ta s? d�ng k d? d?m cho v? tr�
        int k = 1;
        LinkedList p = head;
        while(p != NULL && k != position){
            p = p->next;
            ++k;
        }
 
        if(k != position){
            // N?u duy?t h?t danh s�ch lk r?i m� v?n chua d?n v? tr� c?n ch�n, ta s? m?c d?nh ch�n cu?i
            // N?u b?n kh�ng mu?n ch�n, h�y th�ng b�o v? tr� ch�n kh�ng h?p l?
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
        head = DelHead(head); // N?u v? tr� ch�n l� 0, t?c l� th�m v�o d?u
    }else{
        // B?t d?u t�m v? tr� c?n ch�n. Ta s? d�ng k d? d?m cho v? tr�
        int k = 1;
        LinkedList q, p = head;
        while(p->next->next != NULL && k != position){
            p = p->next;
            ++k;
        }
 
        if(k != position){
            // N?u duy?t h?t danh s�ch lk r?i m� v?n chua d?n v? tr� c?n ch�n, ta s? m?c d?nh x�a cu?i
            // N?u b?n kh�ng mu?n x�a, h�y th�ng b�o v? tr� x�a kh�ng h?p l?
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
// lay thong tin mot node khi biet vi tri
int Get(LinkedList head, int index){
    int k = 0;
    LinkedList p = head;
    while(p != NULL && k != index){
        p = p->next;
    }
    return p->data;
}
 // ham tim kiem theo data
int Search(LinkedList head, int value){
    int position = 0;
    for(LinkedList p = head; p != NULL; p = p->next){
        if(p->data == value){
            return position;
        }
        ++position;
    }
    return -1;
}
//ham xoa mot node khi biet thong tin data
LinkedList DelByVal(LinkedList head, int value){
    int position = Search(head, value);
    while(position != -1){
        DelAt(head, position);
        position = Search(head, value);
    }
    return head;
}
// ham xuat danh sach lien ket
void Traverser(LinkedList head){
    printf("\n");
    for(LinkedList p = head; p != NULL; p = p->next){
        printf("%5d", p->data);
    }
}
// HAM LAy chieu dai danh sach lien ket
int Length(LinkedList head){
    int length = 0;
    for(LinkedList p = head; p != NULL; p = p->next){
        ++length;
    }
    return length;
}
//ham nhap danh sach lien ket 
LinkedList Input(){
    LinkedList head =NULL;
    int n, value;
    do{
        printf("\nNhap so luong phan tu n = ");
        scanf("%d", &n);
    }while(n <= 0);
 
    for(int i = 0; i < n; ++i){
        printf("\nNhap gia tri can them: ");
        scanf("%d", &value);
        head = AddTail(head, value);
    }
    return head;
}
//ham sap xep
void Sort(LinkedList head){
	for (LinkedList i = head; i->next != NULL; i = i->next){
	LinkedList minNode = i;
	for (LinkedList j = i->next; j != NULL; j = j->next){
		if(minNode->data > j->data){
			minNode = j;
		}
	}
	//hoa vi da ta
	int temp = minNode->data;
	minNode->data = i->data;
	i->data = temp;
}
}
//ham main
int main(){
    printf("\n==Tao 1 danh sach lien ket==");
    LinkedList head = Input();
    Traverser(head);
 
    printf("\n==Thu them 1 phan tu vao linked list==");
    head = AddAt(head, 100, 2);
    Traverser(head);
 
    printf("\n==Thu xoa 1 phan tu khoi linked list==");
    head = DelAt(head, 1);
    Traverser(head);
 	
 	printf("\n==Thu xoa dau linked list==");
    head = DelHead(head);
    Traverser(head);
    
    printf("\n==Thu xoa cuoi linked list==");
    head = DelTail(head);
    Traverser(head);
    
    printf("\n==Thu tim kiem 1 phan tu trong linked list==");
    int index = Search(head, 5);
    printf("\nTim thay tai chi so %d", index);
 
    printf("\nSap xep danh sach tang dan!");
    Sort(head);
    Traverser(head);
}
