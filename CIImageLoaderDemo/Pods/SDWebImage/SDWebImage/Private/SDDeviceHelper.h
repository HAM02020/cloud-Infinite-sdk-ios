/*
* This file is part of the SDWebImage package.
* (c) Olivier Poitrey <rs@dailymotion.com>
*
* For the full copyright and license information, please view the LICENSE
* file that was distributed with this source code.
*/

#import <Foundation/Foundation.h>
#import "SDWebImageCompat.h"

/// Device information helper methods
@interface SDDeviceHelper : NSObject

#pragma mark - RAM
+ (NSUInteger)totalMemory;
+ (NSUInteger)freeMemory;

#pragma mark - Screen
+ (double)screenScale;
+ (double)screenEDR;
+ (double)screenMaxEDR;

@end
