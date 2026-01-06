#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char *data;
    struct node *next;
}node;

void delete(node **head, char *data) {
    node *current = *head, *prev = NULL;
    while (current != NULL && strcmp(current->data, data) != 0) {
        prev = current;
        current = current->next;
    }
    if (current == NULL) return; // 没找到要删除的节点
    
    if (prev == NULL) {
        *head = current->next;
    } else {
        prev->next = current->next;
    }
    free(current->data);
    free(current);
}

void insert_at_end(node **head, char *data) {
    node *new_node = (node*)malloc(sizeof(node));
    new_node->data = (char*)malloc(strlen(data) + 1);
    strcpy(new_node->data, data);
    new_node->next = NULL;
    
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    
    node *current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
}

int main() {
    node *head = NULL;
    int n;
    char data[100];
    printf("链表长度：");
    scanf("%d", &n);
    getchar(); // 消费换行符
    printf("请输入%d个字符串:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(data, sizeof(data), stdin);
        data[strcspn(data, "\n")] = '\0'; // 移除换行符
        insert_at_end(&head, data);
    }
    
    node *p = head;
    printf("链表元素：");
    while (p != NULL) {
        printf("%s ", p->data);
        p = p->next;
    }
    printf("\n");
    
    printf("请输入要删除的元素(空格分隔，回车结束)：");
    char str[256];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char *token = strtok(str, " ");
    while (token != NULL) {
        delete(&head, token);
        token = strtok(NULL, " ");
    }
    
    p = head;
    printf("删除后的链表元素：");
    while (p != NULL) {
        printf("%s ", p->data);
        p = p->next;
    }
    printf("\n");

    // 清理剩余内存
    while (head != NULL) {
        node *temp = head;
        head = head->next;
        free(temp->data);
        free(temp);
    }

    return 0;
}