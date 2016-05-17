#include <stdio.h>
#include <iostream>
using namespace std;
#define  MAX    26

typedef struct TrieNode
{
	int nCount;  // 该节点前缀 出现的次数
	struct TrieNode *next[MAX]; //该节点的后续节点
} TrieNode;

TrieNode Memory[1000000]; //先分配好内存。 malloc 较为费时
int allocp = 0;

//初始化一个节点。nCount计数为1， next都为null
TrieNode * createTrieNode()
{
	TrieNode * tmp = &Memory[allocp++];
	tmp->nCount = 1;
	for (int i = 0; i < MAX; i++)
		tmp->next[i] = NULL;
	return tmp;
}

void insertTrie(TrieNode * * pRoot, char * str)
{
	TrieNode * tmp = *pRoot;
	int i = 0, k;
	//一个一个的插入字符
	while (str[i]){
		k = str[i] - 'a'; //当前字符 应该插入的位置
		if (tmp->next[k]){
            tmp->next[k]->nCount++;
        }
		else{
			tmp->next[k] = createTrieNode();
		}
		tmp = tmp->next[k];
		i++; //移到下一个字符
	}

}

int searchTrie(TrieNode * root, char * str)
{
	if (root == NULL)
		return 0;
	TrieNode * tmp = root;
	int i = 0, k;
	while (str[i])
	{
		k = str[i] - 'a';
		if (tmp->next[k])
		{
			tmp = tmp->next[k];
		}
		else
			return 0;
		i++;
	}
	return 1; //返回1 表示str遍历完成,说明都匹配,符合前缀
}

int main(void)
{
	char s[11];
	TrieNode *Root = createTrieNode();
	while (gets(s) && s[0] != '0') //读入0 结束
	{
		insertTrie(&Root, s);
	}

	while (gets(s)) //查询输入的字符串
	{
		printf("%d\n", searchTrie(Root, s));
	}
	return 0;
}
