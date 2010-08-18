/****************************************************************************
**
** Copyright (c) 2009-2010, Jaco Naude
**
** This file is part of Qtilities which is released under the following
** licensing options.
**
** Option 1: Open Source
** Under this license Qtilities is free software: you can
** redistribute it and/or modify it under the terms of the GNU General
** Public License as published by the Free Software Foundation, either
** version 3 of the License, or (at your option) any later version.
**
** Qtilities is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with Qtilities. If not, see http://www.gnu.org/licenses/.
**
** Option 2: Commercial
** Alternatively, this library is also released under a commercial license
** that allows the development of closed source proprietary applications
** without restrictions on licensing. For more information on this option,
** please see the project website's licensing page:
** http://www.qtilities.org/licensing.html
**
** If you are unsure which license is appropriate for your use, please
** contact support@qtilities.org.
**
****************************************************************************/

#ifndef QTILITIES_CORE_APPLICATION_P_H
#define QTILITIES_CORE_APPLICATION_P_H

#include "QtilitiesCore_global.h"
#include "ObjectManager.h"
#include "ContextManager.h"

namespace Qtilities {
    namespace Core {
        using namespace Qtilities::Core::Interfaces;

        /*!
          \class QtilitiesCoreApplicationPrivate
          \brief The QtilitiesCoreApplicationPrivate class stores private data used by the QtilitiesCoreApplication class.
         */
        class QTILIITES_CORE_SHARED_EXPORT QtilitiesCoreApplicationPrivate {
        public:
            static QtilitiesCoreApplicationPrivate* instance();
            ~QtilitiesCoreApplicationPrivate();

            //! Function to access object manager pointer.
            Qtilities::Core::Interfaces::IObjectManager* const objectManager() const;
            //! Function to access context manager pointer.
            Qtilities::Core::Interfaces::IContextManager* const contextManager() const;
            //! Returns the version string of %Qtilities as a QString.
            /*!
              \return The version of %Qtilities, for example: 0.1 Beta 1. Note that the v is not part of the returned string.
              */
            QString qtilitiesVersion() const;

        private:
            QtilitiesCoreApplicationPrivate();
            static QtilitiesCoreApplicationPrivate* m_Instance;

            ObjectManager*      d_objectManager;
            IObjectManager*     d_objectManagerIFace;
            ContextManager*     d_contextManager;
            IContextManager*    d_contextManagerIFace;
        };
    }
}


#endif // QTILITIES_CORE_APPLICATION_P_H
