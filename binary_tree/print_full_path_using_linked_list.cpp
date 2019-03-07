struct path_to_root {
   struct path_to_root *next;
   struct node *n;
};

void printpath(struct node *n, struct path_to_root *p)
{
   struct path_to_root pnext;

   if (!n)
       return;

   if (!n->left && !n->right)
   {
       /* Your homework assignment here is to print the path that's in "p" */
   }

   pnext.n=n;
   pnext.next=p;

   printpath(n->left, &pnext);
   printpath(n->right, &pnext);
}

// And this would be invoked as:
printpath(root, NULL);
