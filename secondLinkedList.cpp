
#include <iostream>
using namespace std;

class Node {
public:

    string dataField;
    Node* pNext;

};

//Create a function that will print the linked list
//The function will have one parameter, that will be a pointer ot the node.

void printlist (Node* pNode) {
    while (pNode != nullptr)
    {
        cout << pNode-> dataField << "   ";
        pNode = pNode -> pNext;
    }
}


int main()

{
    Node* phead = new Node();
    Node* psecond = new Node();
    Node* pthird = new Node();
    Node* pNext = new Node();

    phead->dataField = "H";
    phead->pNext = psecond;
    psecond->dataField = "e";
    psecond->pNext = pthird;
    pthird->dataField = "l";
    pthird->pNext = NULL;


    cout << " \n this is my linked list but with Hello World..\n"  << endl;
    printlist(phead);

    // Add a few nodes to my linked
    Node* pCurrent = new Node;
    pCurrent->dataField = "l";
    pCurrent->pNext = NULL;

    Node* pFifth = new Node;
    pFifth->dataField = "o";
    pFifth->pNext = NULL;


    Node* pSeventh = new Node;
    pSeventh->dataField = "W";
    pSeventh->pNext = NULL;

    Node* pEight = new Node;
    pEight->dataField = "o";
    pEight->pNext = NULL;

    Node* pNine = new Node;
    pNine->dataField = "r";
    pNine->pNext = NULL;

    Node* pTen = new Node;
    pTen->dataField = "l";
    pTen->pNext = NULL;

    Node* pEleven = new Node;
    pEleven->dataField = "d";
    pEleven->pNext = NULL;


    pNext = pCurrent;

    printlist(pCurrent);
    printlist(pFifth);
    printlist(pSeventh);
    printlist(pEight);
    printlist(pNine);
    printlist(pTen);
    printlist(pEleven);








    // Tranverse the list until a "w" is found
    // Create a pointer named pCursor
    Node* pCursor = phead;
    // create a while loop with a loop control variable
    string strCurrent = phead->dataField;
    int nodeNumber = 0;
    while (strCurrent.compare("w") > 0)
        {
        //Tranverse the list
        pCursor = pCursor->pNext;
        nodeNumber++;
    }

    // My w was found at what node number
    cout << "\n The w was found at node number: " << nodeNumber << endl;

    return 0;
}