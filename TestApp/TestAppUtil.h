//
//  TestAppUtil.h
//  TestApp
//
//  Created by Edward Weng on 8/24/21.
//

#import <Foundation/Foundation.h>
#import <IronSource/IronSource.h>

NS_ASSUME_NONNULL_BEGIN

@interface TestAppUtil : NSObject

+ (void)ping:(NSString*)event_name withData:(NSDictionary*)data;

@end
NS_ASSUME_NONNULL_END
