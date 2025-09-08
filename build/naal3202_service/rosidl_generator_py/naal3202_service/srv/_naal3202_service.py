# generated from rosidl_generator_py/resource/_idl.py.em
# with input from naal3202_service:srv/Naal3202Service.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Naal3202Service_Request(type):
    """Metaclass of message 'Naal3202Service_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('naal3202_service')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'naal3202_service.srv.Naal3202Service_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__naal3202_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__naal3202_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__naal3202_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__naal3202_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__naal3202_service__request

            from std_msgs.msg import String
            if String.__class__._TYPE_SUPPORT is None:
                String.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Naal3202Service_Request(metaclass=Metaclass_Naal3202Service_Request):
    """Message class 'Naal3202Service_Request'."""

    __slots__ = [
        '_text',
    ]

    _fields_and_field_types = {
        'text': 'std_msgs/String',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import String
        self.text = kwargs.get('text', String())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.text != other.text:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def text(self):
        """Message field 'text'."""
        return self._text

    @text.setter
    def text(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'text' field must be a sub message of type 'String'"
        self._text = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_Naal3202Service_Response(type):
    """Metaclass of message 'Naal3202Service_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('naal3202_service')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'naal3202_service.srv.Naal3202Service_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__naal3202_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__naal3202_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__naal3202_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__naal3202_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__naal3202_service__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Naal3202Service_Response(metaclass=Metaclass_Naal3202Service_Response):
    """Message class 'Naal3202Service_Response'."""

    __slots__ = [
        '_reverse',
        '_time',
    ]

    _fields_and_field_types = {
        'reverse': 'string',
        'time': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.reverse = kwargs.get('reverse', str())
        self.time = kwargs.get('time', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.reverse != other.reverse:
            return False
        if self.time != other.time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def reverse(self):
        """Message field 'reverse'."""
        return self._reverse

    @reverse.setter
    def reverse(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'reverse' field must be of type 'str'"
        self._reverse = value

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time = value


class Metaclass_Naal3202Service(type):
    """Metaclass of service 'Naal3202Service'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('naal3202_service')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'naal3202_service.srv.Naal3202Service')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__naal3202_service

            from naal3202_service.srv import _naal3202_service
            if _naal3202_service.Metaclass_Naal3202Service_Request._TYPE_SUPPORT is None:
                _naal3202_service.Metaclass_Naal3202Service_Request.__import_type_support__()
            if _naal3202_service.Metaclass_Naal3202Service_Response._TYPE_SUPPORT is None:
                _naal3202_service.Metaclass_Naal3202Service_Response.__import_type_support__()


class Naal3202Service(metaclass=Metaclass_Naal3202Service):
    from naal3202_service.srv._naal3202_service import Naal3202Service_Request as Request
    from naal3202_service.srv._naal3202_service import Naal3202Service_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
