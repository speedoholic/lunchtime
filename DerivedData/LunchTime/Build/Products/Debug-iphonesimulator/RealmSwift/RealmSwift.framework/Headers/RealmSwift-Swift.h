// Generated by Apple Swift version 4.1.2 effective-3.3.2 (swiftlang-902.0.54 clang-902.0.39.2)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Realm;
@import ObjectiveC;
@import Foundation;
@import Realm.Private;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="RealmSwift",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class RLMRealm;
@class RLMObjectSchema;
@class RLMSchema;

/// <code>Object</code> is a class used to define Realm model objects.
/// In Realm you define your model classes by subclassing <code>Object</code> and adding properties to be managed.
/// You then instantiate and use your custom subclasses instead of using the <code>Object</code> class directly.
/// \code
/// class Dog: Object {
///     @objc dynamic var name: String = ""
///     @objc dynamic var adopted: Bool = false
///     let siblings = List<Dog>()
/// }
///
/// \endcode<h3>Supported property types</h3>
/// <ul>
///   <li>
///     <code>String</code>, <code>NSString</code>
///   </li>
///   <li>
///     <code>Int</code>
///   </li>
///   <li>
///     <code>Int8</code>, <code>Int16</code>, <code>Int32</code>, <code>Int64</code>
///   </li>
///   <li>
///     <code>Float</code>
///   </li>
///   <li>
///     <code>Double</code>
///   </li>
///   <li>
///     <code>Bool</code>
///   </li>
///   <li>
///     <code>Date</code>, <code>NSDate</code>
///   </li>
///   <li>
///     <code>Data</code>, <code>NSData</code>
///   </li>
///   <li>
///     <code>RealmOptional<T></code> for optional numeric properties
///   </li>
///   <li>
///     <code>Object</code> subclasses, to model many-to-one relationships
///   </li>
///   <li>
///     <code>List<T></code>, to model many-to-many relationships
///   </li>
/// </ul>
/// <code>String</code>, <code>NSString</code>, <code>Date</code>, <code>NSDate</code>, <code>Data</code>, <code>NSData</code> and <code>Object</code> subclass properties can be declared as optional.
/// <code>Int</code>, <code>Int8</code>, <code>Int16</code>, <code>Int32</code>, <code>Int64</code>, <code>Float</code>, <code>Double</code>, <code>Bool</code>, and <code>List</code> properties cannot. To store an optional
/// number, use <code>RealmOptional<Int></code>, <code>RealmOptional<Float></code>, <code>RealmOptional<Double></code>, or <code>RealmOptional<Bool></code> instead,
/// which wraps an optional numeric value.
/// All property types except for <code>List</code> and <code>RealmOptional</code> <em>must</em> be declared as <code>@objc dynamic var</code>. <code>List</code> and
/// <code>RealmOptional</code> properties must be declared as non-dynamic <code>let</code> properties. Swift <code>lazy</code> properties are not allowed.
/// Note that none of the restrictions listed above apply to properties that are configured to be ignored by Realm.
/// <h3>Querying</h3>
/// You can retrieve all objects of a given type from a Realm by calling the <code>objects(_:)</code> instance method.
/// <h3>Relationships</h3>
/// See our <a href="http://realm.io/docs/cocoa">Cocoa guide</a> for more details.
SWIFT_CLASS_NAMED("Object")
@interface RealmSwiftObject : RLMObjectBase
/// Creates an unmanaged instance of a Realm object.
/// Call <code>add(_:)</code> on a <code>Realm</code> instance to add an unmanaged object into that Realm.
/// <ul>
///   <li>
///     see: <code>Realm().add(_:)</code>
///   </li>
/// </ul>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Creates an unmanaged instance of a Realm object.
/// The <code>value</code> argument is used to populate the object. It can be a key-value coding compliant object, an array or
/// dictionary returned from the methods in <code>NSJSONSerialization</code>, or an <code>Array</code> containing one element for each
/// managed property. An exception will be thrown if any required properties are not present and those properties were
/// not defined with default values.
/// When passing in an <code>Array</code> as the <code>value</code> argument, all properties must be present, valid and in the same order as
/// the properties defined in the model.
/// Call <code>add(_:)</code> on a <code>Realm</code> instance to add an unmanaged object into that Realm.
/// \param value The value used to populate the object.
///
- (nonnull instancetype)initWithValue:(id _Nonnull)value OBJC_DESIGNATED_INITIALIZER;
/// Indicates if the object can no longer be accessed because it is now invalid.
/// An object can no longer be accessed if the object has been deleted from the Realm that manages it, or if
/// <code>invalidate()</code> is called on that Realm.
@property (nonatomic, readonly, getter=isInvalidated) BOOL invalidated;
/// A human-readable description of the object.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/// Helper to return the class name for an Object subclass.
@property (nonatomic, readonly, copy) NSString * _Nonnull className;
/// WARNING: This is an internal helper method not intended for public use.
/// :nodoc:
+ (Class _Nonnull)objectUtilClass:(BOOL)isSwift SWIFT_WARN_UNUSED_RESULT;
/// Override this method to specify the name of a property to be used as the primary key.
/// Only properties of types <code>String</code> and <code>Int</code> can be designated as the primary key. Primary key properties enforce
/// uniqueness for each value whenever the property is set, which incurs minor overhead. Indexes are created
/// automatically for primary key properties.
///
/// returns:
/// The name of the property designated as the primary key, or <code>nil</code> if the model has no primary key.
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
/// Override this method to specify the names of properties to ignore. These properties will not be managed by
/// the Realm that manages the object.
///
/// returns:
/// An array of property names to ignore.
+ (NSArray<NSString *> * _Nonnull)ignoredProperties SWIFT_WARN_UNUSED_RESULT;
/// Returns an array of property names for properties which should be indexed.
/// Only string, integer, boolean, <code>Date</code>, and <code>NSDate</code> properties are supported.
///
/// returns:
/// An array of property names.
+ (NSArray<NSString *> * _Nonnull)indexedProperties SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)objectForKeyedSubscript:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)setObject:(id _Nullable)value forKeyedSubscript:(NSString * _Nonnull)key;
/// Returns whether two Realm objects are equal.
/// Objects are considered equal if and only if they are both managed by the same Realm and point to the same
/// underlying object in the database.
/// \param object The object to compare the receiver to.
///
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
/// WARNING: This is an internal initializer not intended for public use.
/// :nodoc:
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
/// WARNING: This is an internal initializer not intended for public use.
/// :nodoc:
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
@end


/// Object interface which allows untyped getters and setters for Objects.
/// :nodoc:
SWIFT_CLASS("_TtC10RealmSwift13DynamicObject")
@interface DynamicObject : RealmSwiftObject
- (id _Nullable)objectForKeyedSubscript:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)setObject:(id _Nullable)value forKeyedSubscript:(NSString * _Nonnull)key;
/// :nodoc:
- (id _Nullable)valueForUndefinedKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (void)setValue:(id _Nullable)value forUndefinedKey:(NSString * _Nonnull)key;
/// :nodoc:
+ (BOOL)shouldIncludeInDefaultSchema SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
@end


/// :nodoc:
/// Internal class. Do not use directly. Used for reflection and initialization
SWIFT_CLASS("_TtC10RealmSwift18LinkingObjectsBase")
@interface LinkingObjectsBase : NSObject <NSFastEnumeration>
@property (nonatomic, readonly, copy) NSString * _Nonnull objectClassName;
@property (nonatomic, readonly, copy) NSString * _Nonnull propertyName;
@property (nonatomic, readonly, strong) RLMResults<RLMObject *> * _Nonnull rlmResults;
- (nonnull instancetype)initFromClassName:(NSString * _Nonnull)objectClassName property:(NSString * _Nonnull)propertyName OBJC_DESIGNATED_INITIALIZER;
- (NSInteger)countByEnumeratingWithState:(NSFastEnumerationState * _Nonnull)state objects:(id _Nullable * _Nonnull)buffer count:(NSInteger)len SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// :nodoc:
/// Internal class. Do not use directly.
SWIFT_CLASS("_TtC10RealmSwift8ListBase")
@interface ListBase : RLMListBase
/// Returns a human-readable description of the objects contained in the List.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/// Returns the number of objects in this List.
@property (nonatomic, readonly) NSInteger count;
- (nonnull instancetype)initWithArray:(RLMArray<RLMObject *> * _Nonnull)array OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end









@interface RealmSwiftObject (SWIFT_EXTENSION(RealmSwift))
- (RLMObject * _Nonnull)unsafeCastToRLMObject SWIFT_WARN_UNUSED_RESULT;
@end


@interface RealmSwiftObject (SWIFT_EXTENSION(RealmSwift))
+ (nonnull instancetype)bridgingFrom:(id _Nonnull)objectiveCValue with:(id _Nullable)metadata SWIFT_WARN_UNUSED_RESULT;
@end


/// :nodoc:
/// Internal class. Do not use directly.
SWIFT_CLASS_NAMED("ObjectUtil")
@interface RealmSwiftObjectUtil : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




@interface RLMSyncManager (SWIFT_EXTENSION(RealmSwift))
/// The sole instance of the singleton.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) RLMSyncManager * _Nonnull shared;)
+ (RLMSyncManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@end

@class RLMSyncPermissionValue;

@interface RLMSyncPermissionResults (SWIFT_EXTENSION(RealmSwift))
- (RLMSyncPermissionValue * _Nonnull)objectAtIndexedSubscript:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)indexAfter:(NSInteger)i SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSInteger startIndex;
@property (nonatomic, readonly) NSInteger endIndex;
@end




@interface RLMSyncUser (SWIFT_EXTENSION(RealmSwift))
/// A dictionary of all valid, logged-in user identities corresponding to their <code>SyncUser</code> objects.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSDictionary<NSString *, RLMSyncUser *> * _Nonnull all;)
+ (NSDictionary<NSString *, RLMSyncUser *> * _Nonnull)all SWIFT_WARN_UNUSED_RESULT;
/// The logged-in user. <code>nil</code> if none exists. Only use this property if your application expects
/// no more than one logged-in user at any given time.
/// warning:
/// Throws an Objective-C exception if more than one logged-in user exists.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) RLMSyncUser * _Nullable current;)
+ (RLMSyncUser * _Nullable)current SWIFT_WARN_UNUSED_RESULT;
@end


/// This model is used to reflect permissions.
/// It should be used in conjunction with a <code>SyncUser</code>’s Permission Realm.
/// You can only read this Realm. Use the objects in Management Realm to
/// make request for modifications of permissions.
/// See https://realm.io/docs/realm-object-server/#permissions for general
/// documentation.
SWIFT_CLASS("_TtC10RealmSwift14SyncPermission") SWIFT_DEPRECATED_MSG("Use `SyncPermissionValue`")
@interface SyncPermission : RealmSwiftObject
/// The date this object was last modified.
@property (nonatomic, copy) NSDate * _Nonnull updatedAt;
/// The ID of the affected user by the permission.
@property (nonatomic, copy) NSString * _Nonnull userId;
/// The path to the realm.
@property (nonatomic, copy) NSString * _Nonnull path;
/// Whether the affected user is allowed to read from the Realm.
@property (nonatomic) BOOL mayRead;
/// Whether the affected user is allowed to write to the Realm.
@property (nonatomic) BOOL mayWrite;
/// Whether the affected user is allowed to manage the access rights for others.
@property (nonatomic) BOOL mayManage;
/// :nodoc:
+ (BOOL)shouldIncludeInDefaultSchema SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
+ (NSString * _Nullable)_realmObjectName SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
@end


/// This model is used for requesting changes to a Realm’s permissions.
/// It should be used in conjunction with a <code>SyncUser</code>’s Management Realm.
/// See https://realm.io/docs/realm-object-server/#permissions for general
/// documentation.
SWIFT_CLASS("_TtC10RealmSwift20SyncPermissionChange") SWIFT_DEPRECATED_MSG("Use `SyncUser.applyPermission()` and `SyncUser.revokePermission()`")
@interface SyncPermissionChange : RealmSwiftObject
/// The globally unique ID string of this permission change object.
@property (nonatomic, copy) NSString * _Nonnull id;
/// The date this object was initially created.
@property (nonatomic, copy) NSDate * _Nonnull createdAt;
/// The date this object was last modified.
@property (nonatomic, copy) NSDate * _Nonnull updatedAt;
/// An error or informational message, typically written to by the Realm Object Server.
@property (nonatomic, copy) NSString * _Nullable statusMessage;
/// Sync management object status.
@property (nonatomic, readonly) RLMSyncManagementObjectStatus status;
/// The remote URL to the realm.
@property (nonatomic, copy) NSString * _Nonnull realmUrl;
/// The identity of a user affected by this permission change.
@property (nonatomic, copy) NSString * _Nonnull userId;
/// :nodoc:
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
+ (BOOL)shouldIncludeInDefaultSchema SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
+ (NSString * _Nullable)_realmObjectName SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
@end


/// This model is used for offering permission changes to other users.
/// It should be used in conjunction with a <code>SyncUser</code>’s Management Realm.
/// See https://realm.io/docs/realm-object-server/#permissions for general
/// documentation.
SWIFT_CLASS("_TtC10RealmSwift19SyncPermissionOffer")
@interface SyncPermissionOffer : RealmSwiftObject
/// The globally unique ID string of this permission offer object.
@property (nonatomic, copy) NSString * _Nonnull id;
/// The date this object was initially created.
@property (nonatomic, copy) NSDate * _Nonnull createdAt;
/// The date this object was last modified.
@property (nonatomic, copy) NSDate * _Nonnull updatedAt;
/// An error or informational message, typically written to by the Realm Object Server.
@property (nonatomic, copy) NSString * _Nullable statusMessage;
/// Sync management object status.
@property (nonatomic, readonly) RLMSyncManagementObjectStatus status;
/// A token which uniquely identifies this offer. Generated by the server.
@property (nonatomic, copy) NSString * _Nullable token;
/// The remote URL to the realm.
@property (nonatomic, copy) NSString * _Nonnull realmUrl;
/// Whether this offer allows the receiver to read from the Realm.
@property (nonatomic) BOOL mayRead;
/// Whether this offer allows the receiver to write to the Realm.
@property (nonatomic) BOOL mayWrite;
/// Whether this offer allows the receiver to manage the access rights for others.
@property (nonatomic) BOOL mayManage;
/// When this token will expire and become invalid.
@property (nonatomic, copy) NSDate * _Nullable expiresAt;
/// Construct a permission offer object used to offer permission changes to other users.
/// \param realmURL The URL to the Realm on which to apply these permission changes
/// to, once the offer is accepted.
///
/// \param expiresAt When this token will expire and become invalid.
/// Pass <code>nil</code> if this offer should not expire.
///
/// \param mayRead Grant or revoke read access.
///
/// \param mayWrite Grant or revoked read-write access.
///
/// \param mayManage Grant or revoke administrative access.
///
- (nonnull instancetype)initWithRealmURL:(NSString * _Nonnull)realmURL expiresAt:(NSDate * _Nullable)expiresAt mayRead:(BOOL)mayRead mayWrite:(BOOL)mayWrite mayManage:(BOOL)mayManage;
/// :nodoc:
+ (NSArray<NSString *> * _Nonnull)indexedProperties SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
+ (BOOL)shouldIncludeInDefaultSchema SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
+ (NSString * _Nullable)_realmObjectName SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
@end


/// This model is used to apply permission changes defined in the permission offer
/// object represented by the specified token, which was created by another user’s
/// <code>SyncPermissionOffer</code> object.
/// It should be used in conjunction with a <code>SyncUser</code>’s Management Realm.
/// See https://realm.io/docs/realm-object-server/#permissions for general
/// documentation.
SWIFT_CLASS("_TtC10RealmSwift27SyncPermissionOfferResponse")
@interface SyncPermissionOfferResponse : RealmSwiftObject
/// The globally unique ID string of this permission offer response object.
@property (nonatomic, copy) NSString * _Nonnull id;
/// The date this object was initially created.
@property (nonatomic, copy) NSDate * _Nonnull createdAt;
/// The date this object was last modified.
@property (nonatomic, copy) NSDate * _Nonnull updatedAt;
/// An error or informational message, typically written to by the Realm Object Server.
@property (nonatomic, copy) NSString * _Nullable statusMessage;
/// Sync management object status.
@property (nonatomic, readonly) RLMSyncManagementObjectStatus status;
/// The received token which uniquely identifies another user’s <code>SyncPermissionOffer</code>.
@property (nonatomic, copy) NSString * _Nonnull token;
/// The remote URL to the realm on which these permission changes were applied.
@property (nonatomic, copy) NSString * _Nullable realmUrl;
/// Construct a permission offer response object used to apply permission changes
/// defined in the permission offer object represented by the specified token,
/// which was created by another user’s <code>SyncPermissionOffer</code> object.
/// \param token The received token which uniquely identifies another user’s
/// <code>SyncPermissionOffer</code>.
///
- (nonnull instancetype)initWithToken:(NSString * _Nonnull)token;
/// :nodoc:
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
+ (BOOL)shouldIncludeInDefaultSchema SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
+ (NSString * _Nullable)_realmObjectName SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop