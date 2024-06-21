#include "kcg_imported_functions.h"

/* processData/ */
 void ProcessNotificationsData(
  /* myNotifs/ */
  ListData_ListOfDatas *myNotifs,
  /* notifsToDisplay/ */
  Indexes_ListOfDatas *notifsToDisplay)
{
    int i;
    
    size_t n = sizeof(*notifsToDisplay)/sizeof(*notifsToDisplay[0]);

    for(i = 0; i < n; i++)
    {
        (*notifsToDisplay)[i] = (*myNotifs).datas[(*myNotifs).indexes.values[n-1-i]].kind;
    }
}
