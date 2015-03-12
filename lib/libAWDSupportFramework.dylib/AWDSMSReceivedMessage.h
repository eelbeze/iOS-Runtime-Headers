/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDSMSReceivedMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int ctError : 1; 
        unsigned int fzError : 1; 
        unsigned int hasAttachments : 1; 
        unsigned int isFromEmail : 1; 
        unsigned int isFromPhoneNumber : 1; 
        unsigned int isGroupMessage : 1; 
    int _ctError;
    int _fzError;
    NSString *_guid;
    } _has;
    unsigned int _hasAttachments;
    unsigned int _isFromEmail;
    unsigned int _isFromPhoneNumber;
    unsigned int _isGroupMessage;
    unsigned long long _timestamp;
}

@property int ctError;
@property int fzError;
@property(retain) NSString * guid;
@property unsigned int hasAttachments;
@property BOOL hasCtError;
@property BOOL hasFzError;
@property(readonly) BOOL hasGuid;
@property BOOL hasHasAttachments;
@property BOOL hasIsFromEmail;
@property BOOL hasIsFromPhoneNumber;
@property BOOL hasIsGroupMessage;
@property BOOL hasTimestamp;
@property unsigned int isFromEmail;
@property unsigned int isFromPhoneNumber;
@property unsigned int isGroupMessage;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)ctError;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)fzError;
- (id)guid;
- (unsigned int)hasAttachments;
- (BOOL)hasCtError;
- (BOOL)hasFzError;
- (BOOL)hasGuid;
- (BOOL)hasHasAttachments;
- (BOOL)hasIsFromEmail;
- (BOOL)hasIsFromPhoneNumber;
- (BOOL)hasIsGroupMessage;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)isFromEmail;
- (unsigned int)isFromPhoneNumber;
- (unsigned int)isGroupMessage;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCtError:(int)arg1;
- (void)setFzError:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasAttachments:(unsigned int)arg1;
- (void)setHasCtError:(BOOL)arg1;
- (void)setHasFzError:(BOOL)arg1;
- (void)setHasHasAttachments:(BOOL)arg1;
- (void)setHasIsFromEmail:(BOOL)arg1;
- (void)setHasIsFromPhoneNumber:(BOOL)arg1;
- (void)setHasIsGroupMessage:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setIsFromEmail:(unsigned int)arg1;
- (void)setIsFromPhoneNumber:(unsigned int)arg1;
- (void)setIsGroupMessage:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end