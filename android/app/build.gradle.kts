plugins {
    id("com.android.application")
    id("org.jetbrains.kotlin.android")
}

android {
    namespace = "com.matreshkarp.core"
    compileSdk = 36

    defaultConfig {
        applicationId = "com.matreshkarp.game"
        minSdk = 26
        targetSdk = 36
        versionCode = 2587
        versionName = "6.4.2-16.11-19.41"

        externalNativeBuild {
            cmake {
                cppFlags("-std=c++17")
                arguments("-DMATRESHKA_ANDROID=ON")
            }
        }
    }

    flavorDimensions += "brand"
    productFlavors {
        create("matreshkaProd") {
            dimension = "brand"
            buildConfigField("boolean", "NO_FLUTTER", "false")
            buildConfigField("boolean", "USE_SENTRY", "true")
        }
    }

    buildFeatures {
        buildConfig = true
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }
    kotlinOptions {
        jvmTarget = "17"
    }

    externalNativeBuild {
        cmake {
            path = file("../../../cpp/CMakeLists.txt")
        }
    }
}

dependencies {
    implementation("androidx.core:core-ktx:1.15.0")
    implementation("androidx.appcompat:appcompat:1.7.0")
    implementation("androidx.room:room-runtime:2.6.1")
    implementation("com.google.android.gms:play-services-base:18.5.0")
    implementation("com.google.android.material:material:1.12.0")
    implementation("io.sentry:sentry-android:7.18.0")
    implementation("com.adjust.sdk:adjust-android:5.0.0")
    implementation("com.adjust.sdk:adjust-android-oaid:5.0.0")
    implementation("com.pushwoosh:pushwoosh:6.7.0")
    implementation("com.vk.id:vkid:2.2.0")
    implementation("io.appmetrica.analytics:analytics:7.2.0")
    implementation("com.squareup.okhttp3:okhttp:4.12.0")
}
