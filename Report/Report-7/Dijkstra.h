//
//  Dijkstra.h
//  Data_structure
//
//  Created by Seokhwan Kwon on 2020/12/16.
//  Copyright © 2020 Seokhwan Kwon. All rights reserved.
//  20184646 권석환

#ifndef Dijkstra_h
#define Dijkstra_h
#include "heap.h"

#define TRUE 1
#define FALSE 0
#define MAX_VERTICES 100
#define INF 1000000     // 무한대 (연결이 없는 경우)
#define MAX_ELEMENT 7

typedef struct GraphType {
    int n;      // 정점의 개수
    int weight[MAX_VERTICES][MAX_VERTICES];
} GraphType;


HeapElem PQueue_Dijkstra(GraphType* g, int start, int end);

#endif /* Dijkstra_h */
