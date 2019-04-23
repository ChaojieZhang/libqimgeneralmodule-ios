//
//  QIMAutoTrackerDataManager.h
//  QIMGeneralModule
//
//  Created by lilu on 2019/4/22.
//  Copyright © 2019 QIM. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QIMAutoTrackerDataManager : NSObject

+ (instancetype)qimDB_sharedLogDBInstanceWithDBFullJid:(NSString *)dbOwnerFullJid;

+ (instancetype)qimDB_sharedLogDBInstance;

- (void)qim_insertTraceLogWithType:(NSString *)type withSubType:(NSString *)subtype withReportTime:(long long)reportTime withLogInfo:(NSString *)logInfo;

@end

NS_ASSUME_NONNULL_END
