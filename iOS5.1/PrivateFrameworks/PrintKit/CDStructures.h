/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGPoint {
    float _field1;
    float _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    float _field1;
    float _field2;
};

struct SSLContext;

struct _pwg_size_s {
    struct _pwg_map_s {
        char *_field1;
        char *_field2;
    } _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
};

struct fd_set;

struct http_addrlist_s;

struct in_addr {
    unsigned int s_addr;
};

struct ipp_attribute_s;

struct ipp_s {
    int _field1;
    union ipp_request_u _field2;
    struct ipp_attribute_s *_field3;
    struct ipp_attribute_s *_field4;
    struct ipp_attribute_s *_field5;
    int _field6;
    struct ipp_attribute_s *_field7;
    int _field8;
};

struct sockaddr_in {
    unsigned char sin_len;
    unsigned char sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1[2];
    int _field2;
    int _field3;
} CDStruct_2892ad96;

#pragma mark Named Unions

union ipp_request_u {
    CDStruct_2892ad96 _field1;
    CDStruct_2892ad96 _field2;
    CDStruct_2892ad96 _field3;
    CDStruct_2892ad96 _field4;
};
