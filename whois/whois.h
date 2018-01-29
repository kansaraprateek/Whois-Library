//
//  whois.h
//  whois
//
//  Created by Prateek Kansara on 19/08/15.
//  Copyright (c) 2015 Tagrem. All rights reserved.
//

#ifndef __whois__whoisC__
#define __whois__whoisC__

#include <stdio.h>
#import <Foundation/Foundation.h>

@interface whois : NSObject

//int main(int argc , char *argv[]);
void get_whois(char *ip , char **data);
int whois_query(char *server , char *query , char **response);
int hostname_to_ip(char * hostname , char* ip);
@end
#endif /* defined(__whois__whoisC__) */
