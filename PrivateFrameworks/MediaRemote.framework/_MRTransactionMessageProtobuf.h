/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRTransactionMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int name : 1; 
    }  _has;
    unsigned long long  _name;
    _MRTransactionPacketsProtobuf * _packets;
}

@property (nonatomic) BOOL hasName;
@property (nonatomic, readonly) BOOL hasPackets;
@property (nonatomic) unsigned long long name;
@property (nonatomic, retain) _MRTransactionPacketsProtobuf *packets;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasName;
- (BOOL)hasPackets;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)name;
- (id)packets;
- (BOOL)readFrom:(id)arg1;
- (void)setHasName:(BOOL)arg1;
- (void)setName:(unsigned long long)arg1;
- (void)setPackets:(id)arg1;
- (void)writeTo:(id)arg1;

@end