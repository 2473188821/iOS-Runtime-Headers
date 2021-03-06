/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPReportGenerator : NSObject <_DPMaintenance>

+ (id)filterNonConformingRecordsFrom:(id)arg1;
+ (id)queryKeysForPattern:(id)arg1 storage:(id)arg2;
+ (id)queryRecordsForKey:(id)arg1 storage:(id)arg2;
+ (id)randomize:(id)arg1;

- (id)generateReport;
- (id)generateReportForKeys:(id)arg1 allowAnyKey:(BOOL)arg2 storage:(id)arg3;
- (id)generateReportUsing:(id)arg1;
- (BOOL)markSubmitted:(id)arg1;
- (BOOL)markSubmitted:(id)arg1 storage:(id)arg2;
- (void)scheduleMaintenance;
- (void)scheduleMaintenanceWithName:(id)arg1;

@end
