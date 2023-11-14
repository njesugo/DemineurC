#include <stdio.h>
#include <stdlib.h>

MapDemineur initMapDemineur(int length, int width){
  MapDemineur *newMap = (MapDemineur *)malloc(sizeof(MapDemineur));
  newMap->length = length;
  newMap->width = width;
  
  CaseDemineur **newCaseDemineur = (CaseDemineur **)malloc(length * sizeof(CaseDemineur *));
  for (int i = 0; i < length; i++) {
    newCaseDemineur[i] = malloc(width * sizeof(CaseDemineur));
  }

  newMap->tab = newCaseDemineur;
    
  return newMap;
}
