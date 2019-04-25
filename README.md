# C-language

My learning on C

All the information here shows what I understood not neccessary what's correct.

**___________________________________________________________________________________________________________________________________**

## Printf and Scanf

#### format

```
printf("some _ thing _ you _ want _ to _ print")

scanf("datatype_sign",&variableName)

possible datatype_sign
  -- %lf ==> for doubles
  -- %s ==> for strings
  -- %d ==> for integers
```
- *&* before variable name is not used if variable is array

**___________________________________________________________________________________________________________________________________**

## Functions

#### format
```
*datatype* functionName(parameter_with_its_datatype){

  code Block;
  return something;

}
```
- If function returns no value then **(*datatype* = void)**
- If function returns integer value then **(*datatype* = int)**
- If function returns string value then **(*datatype* = char)**

**___________________________________________________________________________________________________________________________________**

## if and else

#### format

```
  if(condition == true){
    
    codeBlock;
  }
  else{
    
    Another codeBlock;
  }
```
- **||** ==> *OR*

- **&&** ==> *AND*

## FILE

#### format

```
FILE *VARIABLE_NAME;

VARIABLE_NAME = fopen("file","mode");

  {codeBLOCK};

fclose(VARIABLE_NAME);
```
##### Possible mode type
- *w ==> it creates file and write in it*
- *a ==> writes inside file if present*
- *r ==> read the content of the file*
