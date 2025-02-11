/* Copyright 2016 Carlos Tse <copperoxide@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <QApplication>
#include "main_window.h"
#include "common.h"

extern char *PKGDATADIR;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString path = QCoreApplication::applicationDirPath();
    PKGDATADIR = new char[path.length() + 1];
    strcpy(PKGDATADIR, path.toLocal8Bit().data());
    std::cout << PKGDATADIR << std::endl;

    Mp3Id3EncCov::MainWindow w;
    w.show();

    return a.exec();
}
