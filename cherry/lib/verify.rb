def _check_range(given, expected_range)
    expected_range.include?(given) ? true : _puts_range_error(expected_range)
end

def _check_type(given, expected_type)
    given.class == expected_type ? true : _puts_type_error(expected_type)
end

def _puts_range_error(expected_range)
    raise "RangeError: Rnage expected is (#{expected_range})."
end

def _puts_type_error(expected_type)
    raise "TypeError: Type expected is #{expected_type}."
end
