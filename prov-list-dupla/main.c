ListaDupla* ListaDupla::parte(int val)
{
   ListaDupla *nova = NULL;
 
   NoDuplo *p = primeiro;
   while(p != NULL && p->getInfo() != val)
       p = p->getProx();
  
   if(p != NULL)
   {
       nova = new ListaDupla();
       nova->ultimo = p->getProx();
       if(nova->ultimo != NULL)
       {
           nova->ultimo->setAnt(NULL);
           nova->primeiro = ultimo;
       }
       else
           nova->primeiro = NULL;
 
       ultimo = p;
       p->setProx(NULL);
 
       for(NoDuplo *p = nova->primeiro; p != NULL; p = p->getProx())
       {
           NoDuplo *aux = p->getAnt();
           p->setAnt(p->getProx());
           p->setProx(aux);
       }
   }
  
   return nova;
}
