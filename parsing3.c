#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<libxml/xmlmemory.h>
#include<libxml/parser.h>
xmlDocPtr doc;
xmlNodePtr cur;
void parseStory (xmlDocPtr doc, xmlNodePtr cur) {
	xmlChar *key;
	cur = cur->xmlChildrenNode;
	while (cur != NULL) {
		if ((!xmlStrcmp(cur->name, (const xmlChar *)"defaultgrade"))) {
			key = xmlNodeListGetString(doc, cur->xmlChildrenNode, 1);
			printf("keyword: %s\n", key);
			xmlFree(key);
		}
	cur = cur->next;
	}
	return;
}

static void parseDoc(char *docname) {
	xmlDocPtr doc;
	xmlNodePtr cur;
	doc = xmlParseFile(docname);
	if (doc == NULL ) {
		fprintf(stderr,"Document not parsed successfully. \n");		
		return;
	}
	cur = xmlDocGetRootElement(doc);
	if (cur == NULL) {
		fprintf(stderr,"empty document\n");     
		xmlFreeDoc(doc);
		return;
	}
	if (xmlStrcmp(cur->name, (const xmlChar *) "quiz")) {
		fprintf(stderr,"document of the wrong type, root node != story");
		xmlFreeDoc(doc);
		return;
	}
	cur = cur->xmlChildrenNode;
	while (cur != NULL) {
		if ((!xmlStrcmp(cur->name, (const xmlChar *)"question"))){
			parseStory (doc, cur);
		}
	cur = cur->next;
	}
	xmlFreeDoc(doc);
	return;
}
//retriving attribute
void getReference (xmlDocPtr doc, xmlNodePtr cur) {
	xmlChar *uri;
	cur = cur->xmlChildrenNode;
	while (cur != NULL) {
		if ((!xmlStrcmp(cur->name, (const xmlChar *)"reference"))) {
			uri = xmlGetProp(cur, "uri");
			printf("uri: %s\n", uri);
			xmlFree(uri);
		}
	cur = cur->next;
	}
return;
}
int printhelp(){
	printf("--help  : prints the options \n");
	printf("--usage : prints the command after make command \n ");

}
int printusage(){
	printf("./program file.xml \n");
}

int main(int argc,char **argv) {
	char  *docname;
	if (argc <= 1) {
		printf("Usage: %s docname\n", argv[0]);
		return(0);
	}
	if (argc==3){
		if (strcmp(argv[2],"--help")==0){
			
			printhelp();
			return;
		}
	
		if (strcmp(argv[2],"--usage")==0){
			printusage();
			return;

		}
	}
	docname = argv[1];
	parseDoc (docname);
	return 1;
}

