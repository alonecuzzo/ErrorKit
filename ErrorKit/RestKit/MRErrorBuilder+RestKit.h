//
//  MRErrorBuilder+RestKit.h
//  ErrorKit-Example
//
//  Created by Jabari on 12/17/13.
//
//

#import "MRErrorBuilder.h"

@interface MRErrorBuilder (RestKit)

// Error for RKErrorNotificationErrorKey
@property (nonatomic, readonly) NSError *errorForErrorNotificationKey;

// Dictionary for RKObjectMapperErrorObjectsKey
@property (nonatomic, strong, readonly) NSDictionary *objectMapperForErrorObjectsKey;

@end
