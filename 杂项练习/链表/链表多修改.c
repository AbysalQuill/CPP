#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char *data;
    struct node *next;
} node;
void modify(node *head) {
    char old_data[100], new_data[100];
    int n, occurrence;
    printf("请输入要修改的节点数：");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("请输入第%d个节点的值：", i + 1);
        scanf("%99s", old_data);
        printf("请输入要修改第几个「%s」(从1开始)：", old_data);
        scanf("%d", &occurrence);
        printf("请输入第%d个节点的新值：", i + 1);
        scanf("%99s", new_data);
        
        node *current = head;
        int count = 0;
        while (current != NULL) {
            if (strcmp(current->data, old_data) == 0) {
                count++;
                if (count == occurrence) {
                    // 释放旧值内存，分配新值内存并复制
                    free(current->data);
                    current->data = (char*)malloc(strlen(new_data) + 1);
                    strcpy(current->data, new_data);
                    printf("已将第%d个「%s」修改为「%s」\n", occurrence, old_data, new_data);
                    break;
                }
            }
            current = current->next;
        }
        if (count < occurrence) {
            printf("未找到第%d个值为「%s」的节点，无法修改。\n", occurrence, old_data);
        }
    }
}

int main() {
    node *head = NULL; 
    

    int n, m; 
    printf("输入链表长度：");
    scanf("%d", &n);    
    printf("输入数据（空格分隔）：");
    for (int i = 0; i < n; i++) {
        char data[100];
        scanf("%99s", data);

        node *new_node = (node*)malloc(sizeof(node));
        new_node->data = (char*)malloc(strlen(data) + 1);
        strcpy(new_node->data, data);
        new_node->next = head;
        head = new_node;
    }
    

    printf("原始链表：\n");
    node *current = head;
    while (current != NULL) {
        printf("%s\n", current->data);
        current = current->next;
    }
    

    modify(head);

    printf("修改后的链表：\n");
    current = head;
    while (current != NULL) {
        printf("%s\n", current->data);
        current = current->next;
    }
    current = head;
    while (current != NULL) {
        node *temp = current;
        current = current->next;
        free(temp->data);
        free(temp);
    }
    return 0;
}