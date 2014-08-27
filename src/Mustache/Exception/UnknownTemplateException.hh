<?hh // strict

/*
 * This file is part of Mustache.php.
 *
 * (c) 2010-2014 Justin Hileman
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

/**
 * Unknown template exception.
 */
class Mustache_Exception_UnknownTemplateException extends InvalidArgumentException implements Mustache_Exception
{
    protected string $templateName = '';

    /**
     * @param string $templateName
     */
    public function __construct(string $templateName)
    {
        $this->templateName = $templateName;
        parent::__construct(sprintf('Unknown template: %s', $templateName));
    }

    public function getTemplateName() : string
    {
        return $this->templateName;
    }
}
