#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 设备结构体
typedef struct Node{
  int id;
  char name[50];
  int status;
  struct Node *next;
}DeviceNode;

DeviceNode* head = NULL;

// 新增节点
void add(int id, char *name, int status)
{
  DeviceNode *newNode = (DeviceNode*)malloc(sizeof(DeviceNode));
  newNode->id = id;
  strcpy(newNode->name,name);
  newNode->status = status;
  newNode->next = NULL;
  if(head == NULL)
  {
    head = newNode;
  }else{
    DeviceNode *p = head;
    while(p->next != NULL) p = p->next;
    p->next = newNode;
  }
}

// 遍历输出全部
void showAll()
{
  DeviceNode *p = head;
  if(p == NULL){
    printf("Empty list\n");
    return;
  }
  while(p != NULL)
  {
    printf("id:%d, name:%s, status:%d\n",p->id,p->name,p->status);
    p = p->next;
  }
}

// 按id查询
DeviceNode* findById(int id)
{
  DeviceNode *p = head;
  while(p != NULL)
  {
    if(p->id == id) return p;
    p = p->next;
  }
  return NULL;
}

// 修改status
int modifyStatus(int id, int newSta)
{
  DeviceNode *p = findById(id);
  if(p == NULL) return 0;
  p->status = newSta;
  return 1;
}

// 按id删除节点
int delById(int id)
{
  DeviceNode *p = head, *pre = NULL;
  while(p != NULL)
  {
    if(p->id == id)
    {
      if(pre == NULL) head = p->next;
      else pre->next = p->next;
      free(p);
      return 1;
    }
    pre = p;
    p = p->next;
  }
  return 0;
}

// 释放全部内存
void freeAll()
{
  DeviceNode *p = head, *tmp;
  while(p != NULL)
  {
    tmp = p;
    p = p->next;
    free(tmp);
  }
  head = NULL;
}

int main()
{
  add(101,"sensorA",1);
  add(102,"motorB",0);
  printf("====全部设备====\n");
  showAll();

  DeviceNode *res = findById(101);
  if(res) printf("find: id=%d name=%s status=%d\n",res->id,res->name,res->status);

  modifyStatus(101,2);
  printf("\n修改后：\n");
  showAll();

  delById(102);
  printf("\n删除后：\n");
  showAll();

  freeAll();
  return 0;
}
