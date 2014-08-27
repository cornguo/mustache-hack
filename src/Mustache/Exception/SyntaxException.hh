<?hh // partial

/*
 * This file is part of Mustache.php.
 *
 * (c) 2010-2014 Justin Hileman
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

/**
 * Mustache syntax exception.
 */
class Mustache_Exception_SyntaxException extends LogicException implements Mustache_Exception
{
    protected mixed $token;

    /**
     * @param string $msg
     * @param array  $token
     */
    public function __construct(string $msg, mixed $token)
    {
        $this->token = $token;
        parent::__construct($msg);
    }

    /**
     * @return array
     */
    public function getToken() : mixed
    {
        return $this->token;
    }
}
