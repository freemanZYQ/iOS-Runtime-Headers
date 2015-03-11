/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFByteSet : NSObject <NSCopying, NSMutableCopying> {
    BOOL mySet[32];
}

+ (id)ASCIIByteSet;
+ (id)asciiWhitespaceSet;
+ (id)nonASCIIByteSet;
+ (id)suspiciousCodepage1252ByteSet;

- (id)_initWithSet:(const char *)arg1;
- (bool)byteIsMember:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)initWithCString:(const char *)arg1;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)invertedSet;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end