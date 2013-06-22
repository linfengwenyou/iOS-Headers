/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CPDisposable-Protocol.h"

@interface CPFontKerning : NSObject <CPDisposable>
{
    struct __CFData *kernTable;
    char *dataPtr;
    unsigned int offset;
    unsigned int kernTableLength;
    struct __CFDictionary *kernDictionary;
    BOOL override;
    BOOL valid;
}

- (id)initWithKernData:(struct __CFData *)arg1;
- (id)initWithCGFont:(struct CGFont *)arg1;
- (void)dispose;
- (void)finalize;
- (void)dealloc;
- (unsigned char)readByte;
- (unsigned short)readUnsignedShort;
- (short)readShort;
- (unsigned int)readUnsignedLong;
- (void)doKerningPair;
- (void)doSubtableFormat0;
- (void)doSubtableFormat1;
- (void)doSubtableFormat2;
- (void)doSubtableFormat3;
- (void)doTTSubtable;
- (void)doOTSubtable;
- (void)doTable;
- (struct __CFDictionary *)createKernTable;

@end
