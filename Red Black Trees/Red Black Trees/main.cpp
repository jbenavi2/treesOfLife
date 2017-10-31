#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <list>
#include <iterator>
#include <vector>
#include <math.h>
#include <iomanip>

using namespace std;

void RBread(int argc, char *argv[]) {
	//N is the number of nodes in the initial red-black tree
	int N;
	//C is the number of additional nodes that need be inserted in the red black tree
	int C;

	

}

struct treeNode {
	int data;
	enum {red, black} color;
	treeNode *parent, *lchild, *rchild;
};

int main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("Error:  Include the name of the input file as an argument\n");
		return 0;
	}

	//open the input file
	printf("Attempting to open file %s\n", argv[1]);
	ifstream inputFile;
	inputFile.open(argv[1], ios::in);



}